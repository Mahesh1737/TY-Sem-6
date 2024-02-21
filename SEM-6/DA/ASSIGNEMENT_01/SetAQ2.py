import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn import metrics
import numpy as np

np.random.seed(42)

data={
     'ID':range(1,501),
     'flat':np.random.uniform(50000,200000,500),
     'houses':np.random.uniform(100000,500000,500),
     'purchases':np.random.uniform(50000,300000,500),
}

realestate_df = pd.DataFrame(data)

X=realestate_df[['flat','houses']]
Y=realestate_df['purchases']

X_train, X_test, Y_train, Y_test = train_test_split(X,Y, test_size=0.2, random_state=42)

print("Training Set Shape: ")
print("X_train: ",X_train.shape)
print("Y_train: ",Y_train.shape)
print("\n")
print("Testing Set Shape: ")
print("X_test: ",X_test.shape)
print("Y_test: ",Y_test.shape)

model=LinearRegression()
model.fit(X_train, Y_train)

Y_pred = model.predict(X_test)

mse=metrics.mean_squared_error(Y_test, Y_pred)
rmse = np.sqrt(mse)

print("\nModel Evaluation:")
print("\nMean squared Error(MSE):",mse)
print("\nRoot Mean squared Error(RMSE):",rmse)
