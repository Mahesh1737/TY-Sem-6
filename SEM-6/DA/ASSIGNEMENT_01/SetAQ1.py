import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn import metrics
import numpy as np

np.random.seed(42)

data={
     'ID':range(1,501),
     'TV':np.random.uniform(0,100,500),
     'Radio':np.random.uniform(0,50,500),
     'Newspaper':np.random.uniform(0,20,500),
     'sales':np.random.uniform(0,20,500)
}

sales_df = pd.DataFrame(data)

X=sales_df[['TV','Radio','Newspaper']]
Y=sales_df['sales']

X_train, X_test, Y_train, Y_test = train_test_split(X,Y, test_size=0.3, random_state=42)

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
