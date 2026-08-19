// Function: FUN_1402c4944
// Addr: 1402c4944
// Size: 162 bytes


undefined4 FUN_1402c4944(longlong param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar4;
      do {
        if (iVar4 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        while( true ) {
          uVar1 = **(ushort **)(param_1 + 0x10);
          *(ushort **)(param_1 + 0x10) = *(ushort **)(param_1 + 0x10) + 1;
          *(ushort *)(param_1 + 0x3a) = uVar1;
          if ((uVar1 == 0) || (iVar4 = *(int *)(param_1 + 0x20), iVar4 < 0)) break;
          bVar5 = 0;
          if ((ushort)(uVar1 - 0x20) < 0x5b) {
            bVar5 = (&DAT_14042d4a1)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
          }
          bVar5 = (&DAT_14042d4a0)
                  [(ulonglong)((uint)bVar5 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar5;
          if (7 < bVar5) goto code_r0x0001402c4be1;
          if (bVar5 == 0) {
            *(undefined1 *)(param_1 + 0x4c) = 1;
            lVar6 = *(longlong *)(param_1 + 0x460);
            if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
              if (*(char *)(lVar6 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = iVar4 + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x20) = iVar4 + 1;
              *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
              *(ushort *)**(undefined8 **)(param_1 + 0x460) = uVar1;
              **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
            }
          }
          else if (bVar5 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar5 == 2) {
            if (uVar1 == 0x20) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (uVar1 == 0x23) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (uVar1 == 0x2b) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (uVar1 == 0x2d) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (uVar1 == 0x30) {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else if (bVar5 == 3) {
            if (uVar1 == 0x2a) {
              piVar2 = *(int **)(param_1 + 0x18);
              *(int **)(param_1 + 0x18) = piVar2 + 2;
              iVar4 = *piVar2;
              *(int *)(param_1 + 0x2c) = iVar4;
              if (iVar4 < 0) {
                *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                *(int *)(param_1 + 0x2c) = -iVar4;
              }
code_r0x0001402c4ae0:
              cVar3 = '\x01';
            }
            else {
              lVar6 = param_1 + 0x2c;
code_r0x0001402c4a8a:
              cVar3 = func_0x0001402c3b98(param_1,lVar6);
            }
code_r0x0001402c4ae2:
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
          else {
            if (bVar5 != 4) {
              if (bVar5 == 5) {
                if (uVar1 == 0x2a) {
                  piVar2 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar2 + 2;
                  iVar4 = *piVar2;
                  *(int *)(param_1 + 0x30) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto code_r0x0001402c4ae0;
                }
                lVar6 = param_1 + 0x30;
                goto code_r0x0001402c4a8a;
              }
              if (bVar5 == 6) {
                cVar3 = FUN_1402c5384(param_1);
              }
              else {
                if (bVar5 != 7) {
                  return 0xffffffff;
                }
                cVar3 = FUN_1402c64d8(param_1);
              }
              goto code_r0x0001402c4ae2;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
        }
        if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x24) != '\a')) {
code_r0x0001402c4be1:
          lVar6 = *(longlong *)(param_1 + 8);
          *(undefined1 *)(lVar6 + 0x30) = 1;
          *(undefined4 *)(lVar6 + 0x2c) = 0x16;
          lVar6 = *(longlong *)(param_1 + 8);
          goto code_r0x0001402c499c;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar4 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
  }
code_r0x0001402c499c:
  FUN_1402cada4(0,0,0,0,0,lVar6);
  return 0xffffffff;
}

