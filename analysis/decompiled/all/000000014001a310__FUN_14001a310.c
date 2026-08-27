// Function: FUN_14001a310
// Addr: 14001a310
// Size: 473 bytes


/* WARNING: Removing unreachable block (ram,0x00014001a3bc) */
/* WARNING: Removing unreachable block (ram,0x00014001a3a1) */
/* WARNING: Removing unreachable block (ram,0x00014001a4b0) */
/* WARNING: Removing unreachable block (ram,0x00014001a3aa) */

void FUN_14001a310(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  BOOL BVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  UINT UVar12;
  uint uVar13;
  UINT vk;
  int local_res10 [2];
  
  if ((char)param_1[1] == '\x06') {
    puVar2 = (undefined8 *)*param_1;
    uVar13 = 0;
    vk = 0;
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
        UVar12 = *(UINT *)(plVar9 + 6);
LAB_14001a3c3:
        if (UVar12 == 0x10) {
          uVar13 = uVar13 | 4;
        }
        else if (UVar12 == 0x11) {
          uVar13 = uVar13 | 2;
        }
        else if (UVar12 == 0x12) {
          uVar13 = uVar13 | 1;
        }
        else if (vk == 0) {
          vk = UVar12;
        }
      }
      else if (uVar11 == 3) {
        UVar12 = (UINT)(longlong)(double)plVar9[6];
        goto LAB_14001a3c3;
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
    if ((vk != 0) &&
       (((uVar13 != 0 || (vk - 0x70 < 0x18)) &&
        (local_res10[0] = param_2, BVar8 = RegisterHotKey(DAT_1404e5280,param_2,uVar13 | 0x4000,vk),
        BVar8 == 1)))) {
      FUN_14002ff50(&DAT_1404e8bc8,local_res10);
    }
  }
  return;
}

