// Function: FUN_140060830
// Addr: 140060830
// Size: 267 bytes


ulonglong FUN_140060830(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  ulonglong local_res10;
  undefined8 ***local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_res10 = param_2;
  uVar4 = FUN_14004aa50(*param_1,&local_res10,4);
  local_18 = local_res10 & 0xffffffff;
  if (local_18 != 8) {
    return uVar4 & 0xffffffffffffff00;
  }
  uStack_20 = 0;
  local_28 = (undefined8 ****)0x0;
  local_10 = 0xf;
  FUN_1404217a0(&local_28,0,8);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_20._0_1_ = 0;
  ppppuVar5 = &local_28;
  if (0xf < local_10) {
    ppppuVar5 = (undefined8 ****)local_28;
  }
  FUN_14004aa50(*param_1,ppppuVar5,(longlong)(int)local_res10);
  uVar4 = local_10;
  pppuVar2 = local_28;
  ppppuVar5 = &local_28;
  if (0xf < local_10) {
    ppppuVar5 = (undefined8 ****)local_28;
  }
  iVar3 = memcmp(ppppuVar5,"PLPV0005",local_res10 & 0xffffffff);
  if (0xf < uVar4) {
    uVar6 = uVar4 + 1;
    ppppuVar5 = (undefined8 ****)pppuVar2;
    if (0xfff < uVar6) {
      ppppuVar5 = (undefined8 ****)pppuVar2[-1];
      if (0x1f < (ulonglong)((longlong)pppuVar2 + (-8 - (longlong)ppppuVar5))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar6 = uVar4 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar5,uVar6);
  }
  return (ulonglong)(iVar3 == 0);
}

