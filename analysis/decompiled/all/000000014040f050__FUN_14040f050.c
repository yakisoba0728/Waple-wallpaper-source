// Function: FUN_14040f050
// Addr: 14040f050
// Size: 558 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14040f050(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x98);
  iVar7 = *(int *)((longlong)plVar3 + 0xc);
  if (iVar7 != -1) goto LAB_14040f0dd;
  if (*(int *)(*plVar3 + 8) == 0) {
LAB_14040f0d1:
    iVar7 = 0;
  }
  else {
    local_58 = local_58 & 0xffffffff00000000;
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    local_68 = 0;
    if (lVar10 != 0) {
      local_68 = *(undefined8 *)(lVar10 + 0x10);
    }
    iVar7 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),*(int *)(*plVar3 + 8),&local_58);
    if (iVar7 == 0) goto LAB_14040f0d1;
    iVar7 = (int)local_58;
  }
  *(int *)((longlong)plVar3 + 0xc) = iVar7;
LAB_14040f0dd:
  if (iVar7 != 0) {
    uVar8 = *(ulonglong *)(param_3 + 0x70);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar9 = 0;
    uVar2 = *(uint *)(param_3 + 0x60);
    if (uVar2 != 0) {
      lVar10 = 0;
      local_58 = uVar8;
      do {
        puVar1 = (undefined4 *)(uVar8 + lVar10 * 0x14);
        if (*(char *)(uVar8 + 0x13 + lVar10 * 0x14) == '\x04') {
          local_4c = *puVar1;
          local_50 = iVar7;
          local_48 = iVar7;
          cVar5 = FUN_1404138e0(plVar3 + 10,&local_50,2,uVar4);
          if ((((cVar5 == '\0') &&
               (cVar5 = FUN_1404138e0(plVar3 + 10,&local_4c,2,uVar4), cVar5 == '\0')) &&
              (cVar5 = FUN_1404138e0(plVar3 + 0x12,&local_50,2,uVar4), cVar5 == '\0')) &&
             (cVar5 = FUN_1404138e0(plVar3 + 0x12,&local_4c,2,uVar4), cVar5 == '\0')) {
            cVar5 = FUN_1404138e0(plVar3 + 0xe,&local_50,2,uVar4);
            if (((cVar5 == '\0') &&
                (cVar5 = FUN_1404138e0(plVar3 + 0xe,&local_4c,2,uVar4), cVar5 == '\0')) &&
               ((cVar5 = FUN_1404138e0(plVar3 + 6,&local_50,2,uVar4), cVar5 == '\0' &&
                (cVar5 = FUN_1404138e0(plVar3 + 6,&local_4c,2,uVar4), cVar5 == '\0')))) {
              uVar6 = 4;
            }
            else {
              uVar6 = 0xb;
            }
          }
          else {
            uVar6 = 8;
          }
          *(undefined1 *)((longlong)puVar1 + 0x13) = uVar6;
          uVar8 = local_58;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (uVar9 < uVar2);
    }
  }
  return;
}

