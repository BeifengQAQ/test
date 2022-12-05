import numpy as np
# data = np.array([[1.,2.,3.],
#     [4.,5.,6.],
#     [7.,8.,9.],
#     [10.,11.,12.]
# ])
# np.random.shuffle(data)
#             # 将训练数据进行拆分，每个mini_batch包含batch_size条的数据
# mini_batches = [data[k:k+2] for k in range(0, len(data), 2)]

# a=[[1,2],[2,3],[3,4],[4,5],[5,6],[6,7],[7,8],[8,9]]

# for iter_id, mini_batch in enumerate(a):
#     print(iter_id,mini_batch)


data = np.array([[1,2],[2,3]])
data2 = np.array([-1,-2])
data2 = np.abs(data2)
print(data2)
data = data *data2
print(data.sum(axis = 0))