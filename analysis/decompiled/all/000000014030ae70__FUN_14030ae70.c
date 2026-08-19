// Function: FUN_14030ae70
// Addr: 14030ae70
// Size: 215 bytes


void FUN_14030ae70(longlong param_1,int *param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x1a4);
  if (((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) ||
     (*(short *)(param_1 + 0x196) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (*(int *)(param_1 + 0x3c) < iVar9) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar9;
    lVar6 = (longlong)*(short *)(param_1 + 0x1a0) * (longlong)*param_2;
    lVar7 = (longlong)*(short *)(param_1 + 0x1a2) * (longlong)*param_2;
    if (iVar9 != 0) {
      do {
        puVar1 = (ushort *)(param_2 + -1);
        uVar8 = (ulonglong)*puVar1;
        param_2 = param_2 + -1;
        if (*puVar1 < *(ushort *)(param_1 + 0xb0)) {
          if (*(int *)(param_1 + 0x324) == 0) {
            iVar5 = 0;
            if (*(short *)(param_1 + 0x1a0) != 0) {
              piVar3 = (int *)(*(longlong *)(param_1 + 0xc0) + uVar8 * 8);
              *piVar3 = *piVar3 + (int)(lVar6 + 0x2000 + (lVar6 >> 0x3f) >> 0xe);
              pbVar2 = (byte *)(uVar8 + *(longlong *)(param_1 + 0xd0));
              *pbVar2 = *pbVar2 | 8;
              iVar5 = *(int *)(param_1 + 0x324);
            }
            if (*(short *)(param_1 + 0x1a2) != 0) {
code_r0x00014030afe2:
              if (iVar5 != 7) {
                piVar3 = (int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar8 * 8);
                *piVar3 = *piVar3 + (int)(lVar7 + 0x2000 + (lVar7 >> 0x3f) >> 0xe);
              }
              pbVar2 = (byte *)(uVar8 + *(longlong *)(param_1 + 0xd0));
              *pbVar2 = *pbVar2 | 0x10;
            }
          }
          else if ((bVar4) ||
                  ((*(int *)(param_1 + 0x324) != 7 &&
                   (((*(char *)(param_1 + 0x2c5) != '\0' && (*(short *)(param_1 + 0x1a2) != 0)) ||
                    ((*(byte *)(uVar8 + *(longlong *)(param_1 + 0xd0)) & 0x10) != 0)))))) {
            if (*(short *)(param_1 + 0x1a0) != 0) {
              pbVar2 = (byte *)(uVar8 + *(longlong *)(param_1 + 0xd0));
              *pbVar2 = *pbVar2 | 8;
            }
            if (*(short *)(param_1 + 0x1a2) != 0) {
              iVar5 = *(int *)(param_1 + 0x324);
              goto code_r0x00014030afe2;
            }
          }
        }
        else if (*(char *)(param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 0x20) = 0x86;
          return;
        }
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) {
          *(undefined4 *)(param_1 + 0x1a4) = 1;
          return;
        }
      } while( true );
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  return;
}

