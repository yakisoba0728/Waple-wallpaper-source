// Function: FUN_140376340
// Addr: 140376340
// Size: 53 bytes


void FUN_140376340(undefined8 ****param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined1 uStack_88;
  undefined8 ***pppuStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined8 ***pppuStack_50;
  longlong lStack_48;
  undefined4 uStack_20;
  byte bStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  cVar1 = *(char *)((longlong)param_1 + 5);
  if (cVar1 == '\0') {
    if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0) {
      pppuStack_78 = &pppuStack_68;
      uStack_70 = CONCAT71(uStack_70._1_7_,*(byte *)((longlong)param_1 + 4) >> 6) &
                  0xffffffffffffff01;
      uStack_88 = 1;
      pppuStack_68 = param_1;
      uStack_60 = param_2;
      FUN_1403e7a80(&pppuStack_78,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
    }
  }
  else if (cVar1 == '\x01') {
    if (((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0) ||
       (((ulonglong)*param_1 & 0x4000000000) != 0)) {
      lStack_48 = (longlong)param_1 +
                  (ulonglong)*(byte *)(param_1 + 2) * 0x100 + 8 +
                  (ulonglong)*(byte *)((longlong)param_1 + 0x11);
      bStack_1c = *(byte *)((longlong)param_1 + 4) >> 6 & 1;
      uStack_20 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
      pppuStack_68 = param_1 + 1;
      iVar4 = *(int *)(lVar2 + 0x18);
      uStack_58 = param_2;
      pppuStack_50 = param_1;
      if (iVar4 == -1) {
        lVar3 = FUN_140398ae0(lVar2 + 0x80);
        iVar4 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        *(int *)(lVar2 + 0x18) = iVar4;
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
      func_0x0001403807d0(&pppuStack_68,&uStack_58,param_2);
    }
  }
  else if (cVar1 == '\x02') {
    if ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0) {
      pppuStack_68 = &pppuStack_78;
      uStack_60 = CONCAT71(uStack_60._1_7_,*(byte *)((longlong)param_1 + 4) >> 6) &
                  0xffffffffffffff01;
      uStack_88 = 1;
      pppuStack_78 = param_1;
      uStack_70 = param_2;
      FUN_1403e8b30(&pppuStack_68,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
    }
  }
  else if ((cVar1 == '\x03') && ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0)) {
    uStack_70 = CONCAT71(uStack_70._1_7_,*(byte *)((longlong)param_1 + 4) >> 6) & 0xffffffffffffff01
    ;
    uStack_88 = 1;
    pppuStack_78 = param_1;
    FUN_1403e6e20(&pppuStack_78,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                  *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
  }
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_a8);
  return;
}

