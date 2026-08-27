// Function: FUN_140280ac0
// Addr: 140280ac0
// Size: 136 bytes


undefined8 * FUN_140280ac0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  *param_1 = param_2;
  iVar3 = 0;
  param_1[2] = 0;
  param_1[1] = 0xffefffffffffffff;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar2 = (longlong *)*param_2;
  plVar1 = (longlong *)param_2[1];
  param_1[7] = 0;
  param_1[8] = 0;
  for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    iVar3 = iVar3 + (int)(plVar2[1] - *plVar2 >> 3);
  }
  FUN_140280e00(param_1 + 9,(longlong)iVar3);
  return param_1;
}

