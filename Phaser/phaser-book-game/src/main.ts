import './style.css';
import 'phaser';

class BootGame extends Phaser.Scene {
    constructor() {
        super('BootGame');
    }
    preload(){
        this.load.image('background', 'assets/sprites/bg_cave.png');
    }


    create() {
        console.log('Game is booting');
        this.scene.start('DrawLine');
    }

}

class PlayGame extends Phaser.Scene {
    constructor(){
        super('PlayGame');
    }
    create() {
        let startX: number = 34;
        let startY: number = 34;
        let pixelGap: number = 4;

        for(let row = 0; row < 4; row++){
            for(let col = 0; col < 4; col++){
                let imageX = startX + ((col + 1) * pixelGap) + (col * 128);
                let imageY = startY + ((row + 1) * pixelGap) + (row * 128);
                console.log('X: ' + imageX + ' Y: ' + imageY);

                let backgroundImage = this.add.image(imageX, imageY, 'background');
                backgroundImage.setOrigin(0, 0);
                backgroundImage.alpha = 0;

                this.tweens.add({
                    targets: [backgroundImage],
                    alpha: 1,
                    duration: 1000,
                    onCompleteHandler: () => {
                        this.scene.start('DrawLine');
                    }
                });
            }
        }

        console.log('This is my awesome game!');
    }
}

class DrawLine extends Phaser.Scene {
    constructor () {
        super('DrawLine')
    }
    create() {
        console.log('In DrawLine');
        const gfxLine = this.add.graphics();
        gfxLine.lineStyle(4, 0x000000, 1)
        gfxLine.moveTo(10, 10);
        gfxLine.lineTo(100, 10);
        gfxLine.strokePath();
        setTimeout(() => {
            gfxLine.lineTo(200, 10);
            gfxLine.strokePath();
        }, 1000);
    }
    update(time: number, delta: number): void {

    }
}

const gameConfig = {
    width: 600, 
    height: 600,
    backgroundColor: 0xff0000,
    scene: [ BootGame, PlayGame, DrawLine]
}


const game = new Phaser.Game(gameConfig);