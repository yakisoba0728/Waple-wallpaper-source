// Function: FUN_14001a3e0
// Addr: 14001a3e0
// Size: 250 bytes


/* WARNING: Removing unreachable block (ram,0x00014001a48c) */
/* WARNING: Removing unreachable block (ram,0x00014001a471) */
/* WARNING: Removing unreachable block (ram,0x00014001a580) */
/* WARNING: Removing unreachable block (ram,0x00014001a47a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001a3e0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_res10 [2];
  
  if ((char)param_1[1] == '\x06') {
    puVar2 = (undefined8 *)*param_1;
    uVar13 = 0;
    iVar8 = 0;
    if (puVar2 == (undefined8 *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
      bVar6 = false;
      bVar4 = true;
    }
    else {
      bVar6 = true;
      plVar10 = (longlong *)*puVar2;
      bVar4 = false;
      plVar9 = *(longlong **)*puVar2;
      uVar13 = 0;
    }
    while( true ) {
      bVar5 = bVar6;
      if (!bVar4) {
        bVar5 = plVar9 != plVar10;
      }
      if (!bVar5) break;
      uVar11 = *(uint *)(plVar9 + 7) & 0xff;
      if ((uVar11 == 1) || (uVar11 == 2)) {
        iVar12 = (int)plVar9[6];
LAB_14001a493:
        if (iVar12 == 0x10) {
          uVar13 = uVar13 | 4;
        }
        else if (iVar12 == 0x11) {
          uVar13 = uVar13 | 2;
        }
        else if (iVar12 == 0x12) {
          uVar13 = uVar13 | 1;
        }
        else if (iVar8 == 0) {
          iVar8 = iVar12;
        }
      }
      else if (uVar11 == 3) {
        iVar12 = (int)(longlong)(double)plVar9[6];
        goto LAB_14001a493;
      }
      plVar3 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar9 = plVar3;
        while (cVar1 == '\0') {
          plVar9 = (longlong *)*plVar9;
          cVar1 = *(char *)(*plVar9 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar7 = (longlong *)plVar9[1];
        plVar3 = plVar9;
        while ((plVar9 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x19);
          plVar7 = (longlong *)plVar9[1];
          plVar3 = plVar9;
        }
      }
    }
    if ((iVar8 != 0) &&
       (((uVar13 != 0 || (iVar8 - 0x70U < 0x18)) &&
        (local_res10[0] = param_2,
        iVar8 = (*_DAT_140426ad8)(DAT_1404e5350,param_2,uVar13 | 0x4000,iVar8), iVar8 == 1)))) {
      FUN_140030020(&DAT_1404e8c98,local_res10);
    }
  }
  return;
}

