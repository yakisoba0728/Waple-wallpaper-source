// Function: FUN_1403ea7b0
// Addr: 1403ea7b0
// Size: 523 bytes


void FUN_1403ea7b0(int *param_1,longlong param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((((uint)*(byte *)(param_2 + 2) * 0x100 + (uint)*(byte *)(param_2 + 3) != 0xffff) ||
      ((uint)*(byte *)(param_2 + 5) + (uint)*(byte *)(param_2 + 4) * 0x100 != 0)) &&
     (uVar5 = param_1[0x3d], param_1[0x3d] = uVar5 + 1, uVar5 < 0x7d1)) {
    iVar3 = param_1[0x3a];
    iVar4 = (int)param_2 - *param_1;
    cVar1 = FUN_1403c58e0(param_1 + 0x2e,iVar4);
    if (cVar1 == (char)iVar3) {
      FUN_1403a29e0(param_1 + 0x2a,iVar4);
      if ((char)param_1[0x16] == '\0') {
        if (((uint)*(byte *)(param_2 + 2) * 0x100 + (uint)*(byte *)(param_2 + 3) != 0xffff) &&
           (param_1[0x3e] = param_1[0x3e] + 1, (uint)param_1[0x3e] < 0x5dd)) {
          iVar3 = (uint)*(byte *)(param_2 + 2) * 0x100 + (uint)*(byte *)(param_2 + 3);
          if (iVar3 == 0xffff) {
            iVar3 = 0xffff;
          }
          FUN_1403a29e0(*(undefined8 *)(param_1 + 2),iVar3);
        }
        param_1[0x3e] =
             param_1[0x3e] + (uint)*(byte *)(param_2 + 4) * 0x100 + (uint)*(byte *)(param_2 + 5);
        if ((uint)param_1[0x3e] < 0x5dd) {
          if (*(char *)(*(longlong *)(param_1 + 2) + 0x40) == '\0') {
            FUN_14036b6f0(*(longlong *)(param_1 + 2) + 0x10,param_2 + 6,
                          (uint)*(byte *)(param_2 + 4) * 0x100 + (uint)*(byte *)(param_2 + 5),2);
          }
          else {
            FUN_140373360();
          }
        }
      }
      else {
        cVar1 = FUN_1403e6a40(param_1 + 4);
        if (cVar1 == '\0') {
          uVar5 = 0;
          uVar6 = (uint)*(byte *)(param_2 + 4) * 0x100 + (uint)*(byte *)(param_2 + 5);
          if (uVar6 != 0) {
            do {
              if (uVar5 < (uint)*(byte *)(param_2 + 4) * 0x100 + (uint)*(byte *)(param_2 + 5)) {
                pbVar2 = (byte *)(param_2 + 4) + (ulonglong)uVar5 * 2 + 2;
              }
              else {
                pbVar2 = &DAT_140452e64;
              }
              iVar3 = param_1[0x14];
              iVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
              cVar1 = FUN_1403c58e0(param_1 + 8,iVar4);
              if (cVar1 != (char)iVar3) {
                FUN_1403a29e0(*(undefined8 *)(param_1 + 2),iVar4);
                FUN_1403bd7f0(param_1 + 4,iVar4);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
          }
        }
      }
    }
  }
  return;
}

