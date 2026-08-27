// Function: FUN_1401ee0c0
// Addr: 1401ee0c0
// Size: 223 bytes


void FUN_1401ee0c0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  piVar1 = (int *)*param_4;
  if ((*param_3 & 0x200) == 0) {
    iVar4 = *piVar1;
    if ((-1 < iVar4) &&
       ((ulonglong)(longlong)iVar4 <
        (ulonglong)
        ((*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 4) * -0x5555555555555555)
       )) {
      *param_5 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8 + (longlong)iVar4 * 0x30);
      return;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xd8);
    for (lVar6 = *(longlong *)(param_1 + 0xd0); lVar6 != lVar2; lVar6 = lVar6 + 0x30) {
      lVar3 = *(longlong *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar5 = (longlong *)(lVar3 + 0x200);
        if (0xf < *(ulonglong *)(lVar3 + 0x218)) {
          plVar5 = (longlong *)*plVar5;
        }
        iVar4 = FUN_1402c10d0(plVar5,piVar1);
        if ((iVar4 == 0) || ((char)*piVar1 == '\0')) {
          *param_5 = *(undefined8 *)(lVar6 + 8);
        }
      }
    }
  }
  return;
}

