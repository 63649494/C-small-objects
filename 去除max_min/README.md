编写函数fun，其功能是：将一组得分中，去掉一个最高分和一个最低分，然后求平均值，并通过函数返回。函数形参a指向存放得分的数组，形参n中存放得分个数（n>2）。

设定三个变量sum存放合值，max存放最大值，min存放最小值。max和min都赋为数组中第一个元素的值。利用循环将数组中元素累加到sum中，并找出最大值和最小值，sum值减去最大值和最小值。函数返回sum除以元素个数-2得平均值。
