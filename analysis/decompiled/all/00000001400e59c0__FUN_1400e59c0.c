// Function: FUN_1400e59c0
// Addr: 1400e59c0
// Size: 1141 bytes


char FUN_1400e59c0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  cVar3 = '\0';
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 != -1) {
    do {
      if (iVar2 == 0x7c) {
        return cVar3;
      }
      if (iVar2 == 0x29) {
        if (*(int *)(param_1 + 0x14) != 0) {
          return cVar3;
        }
        if ((*(uint *)(param_1 + 0x60) >> 0x1b & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400e74c0(0x29,5);
        }
LAB_1400e5a1e:
        if (iVar2 == 0x24) {
          puVar4 = (undefined8 *)FUN_14028af20(0x20);
          *puVar4 = &PTR_FUN_140486c30;
          puVar4[1] = 3;
          puVar4[2] = 0;
          puVar4[3] = 0;
          FUN_1400e5e40(param_1 + 0x38,puVar4);
          FUN_1400e5740(param_1);
          goto LAB_1400e5db7;
        }
        if (iVar2 == 0x2a) {
          if (((*(uint *)(param_1 + 0x60) >> 0x19 & 1) == 0) || (cVar3 != '\0')) goto LAB_1400e5dfc;
LAB_1400e5c80:
          if ((iVar2 == 0x5d) && ((*(uint *)(param_1 + 0x60) >> 0x1c & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1400e74c0(0x5d,4);
          }
        }
        else {
LAB_1400e5ccb:
          if (((iVar2 == 0x2b) || (iVar2 == 0x3f)) || (iVar2 == 0x7b)) {
LAB_1400e5dfc:
                    /* WARNING: Subroutine does not return */
            FUN_1400e74c0(iVar2,10);
          }
          if (iVar2 != 0x7d) goto LAB_1400e5c80;
          if ((*(uint *)(param_1 + 0x60) >> 0x1b & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1400e74c0(0x7d,6);
          }
        }
LAB_1400e5c93:
        FUN_1400e77f0(param_1 + 0x38,*(undefined1 *)(param_1 + 0x75));
LAB_1400e5ca0:
        FUN_1400e5740(param_1);
LAB_1400e5ca8:
        iVar2 = *(int *)(param_1 + 0x70);
        iVar7 = -1;
        iVar5 = 0;
        if (iVar2 != 0x2a) {
          if (iVar2 == 0x2b) {
            iVar5 = 1;
          }
          else if (iVar2 == 0x3f) {
            iVar7 = 1;
            iVar5 = 0;
          }
          else {
            if (iVar2 != 0x7b) goto LAB_1400e5db7;
            FUN_1400e5740(param_1);
            cVar3 = FUN_1400e7a50(param_1,7,0);
            if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_1400e74c0();
            }
            iVar5 = *(int *)(param_1 + 0x6c);
            iVar7 = iVar5;
            if (*(int *)(param_1 + 0x70) == 0x2c) {
              FUN_1400e5740(param_1);
              iVar7 = -1;
              if (*(int *)(param_1 + 0x70) != 0x7d) {
                cVar3 = FUN_1400e7a50(param_1,7,0);
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_1400e74c0();
                }
                iVar7 = *(int *)(param_1 + 0x6c);
                goto LAB_1400e5d66;
              }
            }
            else {
LAB_1400e5d66:
              if (*(int *)(param_1 + 0x70) != 0x7d) goto LAB_1400e5e33;
            }
            if ((iVar7 != -1) && (iVar7 < iVar5)) {
LAB_1400e5e33:
                    /* WARNING: Subroutine does not return */
              FUN_1400e74c0();
            }
          }
        }
        FUN_1400e5740(param_1);
        if (((*(uint *)(param_1 + 0x60) >> 9 & 1) == 0) || (*(int *)(param_1 + 0x70) != 0x3f)) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
          FUN_1400e5740(param_1);
        }
        FUN_1400e8240(param_1 + 0x38,iVar5,iVar7,uVar6);
      }
      else {
        if (iVar2 == 0x2e) {
          puVar4 = (undefined8 *)FUN_14028af20(0x20);
          *puVar4 = &PTR_FUN_140486c30;
          puVar4[1] = 5;
          puVar4[2] = 0;
          puVar4[3] = 0;
          FUN_1400e5e40(param_1 + 0x38,puVar4);
          goto LAB_1400e5ca0;
        }
        if (iVar2 == 0x5c) {
          FUN_1400e5740(param_1);
          if ((*(byte *)(param_1 + 0x60) & 0x40) != 0) {
            if (*(char *)(param_1 + 0x75) == 'b') {
              puVar4 = (undefined8 *)FUN_14028af20(0x20);
              *puVar4 = &PTR_FUN_140486c30;
              puVar4[1] = 4;
              puVar4[2] = 0;
              puVar4[3] = 0;
              FUN_1400e5e40(param_1 + 0x38,puVar4);
              FUN_1400e5740(param_1);
            }
            else {
              if (*(char *)(param_1 + 0x75) != 'B') goto LAB_1400e5b2b;
              puVar4 = (undefined8 *)FUN_14028af20(0x20);
              *puVar4 = &PTR_FUN_140486c30;
              puVar4[1] = 4;
              puVar4[2] = 0;
              puVar4[3] = 0;
              FUN_1400e5e40(param_1 + 0x38,puVar4);
              puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 0xc);
              *puVar1 = *puVar1 ^ 1;
              FUN_1400e5740(param_1);
            }
            goto LAB_1400e5db7;
          }
LAB_1400e5b2b:
          FUN_1400e74d0(param_1);
          goto LAB_1400e5ca8;
        }
        if (iVar2 == 0x5b) {
          *(undefined1 *)(param_1 + 0x74) = 1;
          FUN_1400e5740(param_1);
          puVar4 = (undefined8 *)FUN_14028af20(0x50);
          puVar4[1] = 7;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = &PTR_FUN_140486dc0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          *(undefined2 *)(puVar4 + 8) = 0;
          puVar4[9] = 0;
          FUN_1400e5e40(param_1 + 0x38,puVar4);
          if (*(int *)(param_1 + 0x70) == 0x5e) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 0xc);
            *puVar1 = *puVar1 ^ 1;
            FUN_1400e5740(param_1);
          }
          FUN_1400e7bb0(param_1);
          *(undefined1 *)(param_1 + 0x74) = 0;
          if (*(int *)(param_1 + 0x70) != 0x5d) {
                    /* WARNING: Subroutine does not return */
            FUN_1400e74c0();
          }
          goto LAB_1400e5ca0;
        }
        if (iVar2 == 0x28) {
          FUN_1400e5740(param_1);
          cVar3 = FUN_1400e7660(param_1);
          if (*(int *)(param_1 + 0x70) != 0x29) {
                    /* WARNING: Subroutine does not return */
            FUN_1400e74c0();
          }
          FUN_1400e5740(param_1);
          if (cVar3 != '\0') goto LAB_1400e5ca8;
        }
        else {
          if (iVar2 != 0x5e) goto LAB_1400e5a1e;
          if (((*(uint *)(param_1 + 0x60) >> 0x18 & 1) != 0) && (cVar3 != '\0')) goto LAB_1400e5ccb;
          puVar4 = (undefined8 *)FUN_14028af20(0x20);
          *puVar4 = &PTR_FUN_140486c30;
          puVar4[1] = 2;
          puVar4[2] = 0;
          puVar4[3] = 0;
          FUN_1400e5e40(param_1 + 0x38,puVar4);
          FUN_1400e5740(param_1);
          if (((*(uint *)(param_1 + 0x60) >> 0x19 & 1) != 0) &&
             ((*(int *)(param_1 + 0x70) == 0x2a && (cVar3 == '\0')))) goto LAB_1400e5c93;
        }
      }
LAB_1400e5db7:
      iVar2 = *(int *)(param_1 + 0x70);
      cVar3 = '\x01';
    } while (iVar2 != -1);
  }
  return cVar3;
}

