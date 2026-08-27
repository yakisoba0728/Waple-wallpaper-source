// Function: FUN_1403523a0
// Addr: 1403523a0
// Size: 486 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1403523a0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_e8 [28];
  int aiStack_cc [33];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  iVar9 = 0;
LAB_1403523dc:
  do {
    iVar8 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar10 = 0xffffffff;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 4) * param_3;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 4) * param_4;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + -4;
    *(undefined2 *)(param_1 + 0x50) = 0;
    if (*(short *)(param_1 + 0x78) != 0) {
      do {
        iVar7 = uVar10 + 1;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        uVar10 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar8 * 2);
        cVar5 = FUN_1403514d0(param_1,iVar7,uVar10);
        if (cVar5 != '\0') {
LAB_14035252e:
          if (*(int *)(param_1 + 0x38) != 0x62) {
            return *(int *)(param_1 + 0x38);
          }
          if (param_3 == param_4) {
            return 0x62;
          }
          lVar6 = (longlong)iVar9;
          iVar9 = iVar9 + 1;
          aiStack_cc[lVar6 + 1] = param_3;
          param_3 = (param_3 + param_4 >> 1) + 1;
          goto LAB_1403523dc;
        }
        if (*(longlong *)(param_1 + 0x68) != 0) {
          uVar2 = *(uint *)(param_1 + 0x44);
          if (((((uVar2 & *(int *)(param_1 + 4) - 1U) == 0) &&
               (*(int *)(param_1 + 0x48) <= (int)uVar2)) && ((int)uVar2 <= *(int *)(param_1 + 0x4c))
              ) && (((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c) ^
                     *(byte *)(*(longlong *)(param_1 + 0x58) + 0x1c)) & 8) == 0)) {
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -4;
          }
          cVar5 = FUN_140351be0(param_1);
          if (cVar5 != '\0') goto LAB_14035252e;
          if (*(longlong *)(param_1 + 0x60) == 0) {
            *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)*(ushort *)(param_1 + 0x78));
    }
    if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
      sVar1 = *(short *)(param_1 + 0x50);
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      while (puVar4 = puVar3, sVar1 = sVar1 + -1, sVar1 != 0) {
        puVar3 = (undefined8 *)*puVar4;
        if (puVar3[1] == puVar4[1]) {
          puVar4[1] = puVar3;
        }
      }
      *puVar4 = 0;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_140351820(param_1);
      }
    }
    if (iVar9 + -1 < 0) {
      return 0;
    }
    param_4 = param_3 + -1;
    param_3 = aiStack_cc[iVar9];
    iVar9 = iVar9 + -1;
  } while( true );
}

