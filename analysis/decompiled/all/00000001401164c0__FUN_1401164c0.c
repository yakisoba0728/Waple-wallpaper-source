// Function: FUN_1401164c0
// Addr: 1401164c0
// Size: 36 bytes


ulonglong * FUN_1401164c0(ulonglong *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_1;
  auVar2._4_4_ = param_2;
  auVar2._0_4_ = param_2;
  auVar2._8_4_ = param_2;
  auVar2._12_4_ = param_2;
  auVar2 = divps(auVar1,auVar2);
  *param_1 = auVar2._0_8_;
  *(float *)(param_1 + 1) = *(float *)(param_1 + 1) / param_2;
  return param_1;
}

