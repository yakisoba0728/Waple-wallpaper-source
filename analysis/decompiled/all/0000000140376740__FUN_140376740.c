// Function: FUN_140376740
// Addr: 140376740
// Size: 19 bytes


void FUN_140376740(undefined8 ****param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  undefined1 uStack_88;
  undefined8 ***pppuStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined8 ***pppuStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_20;
  byte bStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)((longlong)param_1 + 4);
  cVar2 = *(char *)((longlong)param_1 + 7);
  if (cVar2 == '\0') {
    if (((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0) && ((bVar1 >> 4 & 1) == 0)) {
      pppuStack_68 = &pppuStack_78;
      uStack_60 = CONCAT71(uStack_60._1_7_,bVar1 >> 6) & 0xffffffffffffff01;
      uStack_88 = 1;
      pppuStack_78 = param_1;
      uStack_70 = param_2;
      FUN_1403e85a0(&pppuStack_68,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
    }
  }
  else if (cVar2 == '\x01') {
    if (((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0) || ((bVar1 >> 6 & 1) != 0)) {
      bStack_1c = bVar1 >> 6 & 1;
      lStack_48 = (longlong)param_1 +
                  (ulonglong)*(byte *)((longlong)param_1 + 0x1f) + 0xc +
                  ((ulonglong)*(byte *)((longlong)param_1 + 0x1e) +
                  (ulonglong)
                  CONCAT11(*(undefined1 *)((longlong)param_1 + 0x1c),
                           *(undefined1 *)((longlong)param_1 + 0x1d)) * 0x100) * 0x100;
      uStack_20 = 0;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
      pppuStack_78 = (undefined8 ***)((longlong)param_1 + 0xc);
      iVar4 = *(int *)(lVar3 + 0x18);
      uStack_58 = param_2;
      pppuStack_50 = param_1;
      if (iVar4 == -1) {
        lVar5 = FUN_140398ae0(lVar3 + 0x80);
        iVar4 = (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        *(int *)(lVar3 + 0x18) = iVar4;
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar4);
      func_0x0001403823d0(&pppuStack_78,&uStack_58,param_2);
    }
  }
  else if (cVar2 == '\x02') {
    if (((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0) && ((bVar1 >> 4 & 1) == 0)) {
      pppuStack_68 = &pppuStack_78;
      uStack_60 = CONCAT71(uStack_60._1_7_,bVar1 >> 6) & 0xffffffffffffff01;
      uStack_88 = 1;
      pppuStack_78 = param_1;
      uStack_70 = param_2;
      FUN_1403e9650(&pppuStack_68,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
    }
  }
  else if (cVar2 == '\x04') {
    uVar6 = (uint)*(byte *)((longlong)param_1 + 0x1d) * 0x10000 +
            (uint)*(byte *)((longlong)param_1 + 0x1e) * 0x100 +
            (uint)*(byte *)((longlong)param_1 + 0x1c) * 0x1000000 +
            (uint)*(byte *)((longlong)param_1 + 0x1f);
    uStack_38 = 0;
    uStack_34 = 0;
    lStack_48 = CONCAT44(lStack_48._4_4_,uVar6 >> 0x1e);
    lStack_40 = (longlong)param_1 + (ulonglong)(uVar6 & 0xffffff) + 0xc;
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
    pppuStack_78 = (undefined8 ***)((longlong)param_1 + 0xc);
    iVar4 = *(int *)(lVar3 + 0x18);
    uStack_58 = param_2;
    pppuStack_50 = param_1;
    if (iVar4 == -1) {
      lVar5 = FUN_140398ae0(lVar3 + 0x80);
      iVar4 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      *(int *)(lVar3 + 0x18) = iVar4;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar4);
    func_0x000140382ff0(&pppuStack_78,&uStack_58,param_2);
  }
  else if (((cVar2 == '\x06') && ((*(byte *)(*(longlong *)(param_2 + 8) + 0xb4) & 1) != 0)) &&
          ((bVar1 >> 4 & 1) == 0)) {
    pppuStack_78 = &pppuStack_68;
    uStack_70 = CONCAT71(uStack_70._1_7_,bVar1 >> 6) & 0xffffffffffffff01;
    uStack_88 = 1;
    pppuStack_68 = param_1;
    uStack_60 = param_2;
    FUN_1403e9be0(&pppuStack_78,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                  *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xb0));
  }
  func_0x0001402ed2f0(uStack_18 ^ (ulonglong)auStack_a8);
  return;
}

