import numpy as np

class Perceptron:

    def __init__(self, learning_rate=0.01, epochs=50, random_state=42) -> None:
        self.learning_rate = learning_rate
        self.epochs = epochs
        self.random_state = random_state

    def fit(self, X, y):
        random_generator = np.random.RandomState(self.random_state)
        self.w_ = [0.0, 1.0]
        self.b_ = np.float_(0.)
        self.errors_ = []

        for i in range(self.epochs):
            n_errors = 0
            for xi, target in zip(X, y):
                update = self.learning_rate * (target - self.predict(xi))
                self.w_ += update * xi
                self.b_ += update

                if update != 0.0:
                    n_errors += 1

            print('Epoch: {}, Errors: {}, Weights: {}, Bias: {}'.format(i, n_errors, self.w_, self.b_))
            self.errors_.append(n_errors)
        
        return self
    
    def net_input(self, X):
        return np.dot(X, self.w_) + self.b_
    
    def predict(self, X):
        return np.where(self.net_input(X) >= 0.0, 1, 0)


