// Function: FUN_140399e70
// Addr: 140399e70
// Size: 208 bytes


undefined8 FUN_140399e70(longlong param_1,longlong *param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (param_3 != 8) {
    return 0x80070057;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 != 0) {
    lVar3 = *param_2;
    uVar5 = (ulonglong)(((uint)((ulonglong)lVar3 >> 0x20) ^ (uint)lVar3) * 0x1e3779b1 & 0x3fffffff)
            % (ulonglong)*(uint *)(param_1 + 0x58);
    if ((*(uint *)(lVar2 + 8 + uVar5 * 0x18) >> 1 & 1) != 0) {
      iVar6 = 0;
      do {
        lVar1 = lVar2 + uVar5 * 0x18;
        if (*(longlong *)(lVar2 + uVar5 * 0x18) == lVar3) {
          if (((*(byte *)(lVar1 + 8) & 1) != 0) && (lVar1 != 0)) {
            plVar4 = (longlong *)(lVar1 + 0x10);
            goto LAB_140399efe;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        uVar5 = (ulonglong)((int)uVar5 + iVar6 & *(uint *)(param_1 + 0x54));
      } while ((*(uint *)(lVar2 + 8 + uVar5 * 0x18) >> 1 & 1) != 0);
    }
  }
  plVar4 = &DAT_14045dd10;
LAB_140399efe:
  plVar4 = (longlong *)*plVar4;
  if (plVar4 == (longlong *)0x0) {
    return 0x80004005;
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  *param_4 = (longlong)plVar4;
  return 0;
}

