// Function: FUN_140323610
// Addr: 140323610
// Size: 493 bytes


ulonglong FUN_140323610(longlong param_1,undefined8 *param_2,char *param_3,ulonglong param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  longlong local_res10 [3];
  
  pcVar8 = param_3 + (param_4 & 0xffffffff);
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[2] = pcVar8;
  while( true ) {
    *param_2 = param_3;
    (*(code *)param_2[7])(param_2);
    pcVar1 = (char *)*param_2;
    pcVar7 = pcVar8 + -0x12;
    if (pcVar1 < pcVar8) {
      pcVar7 = pcVar1 + -0x11;
    }
    for (; param_3 < pcVar7; param_3 = param_3 + 1) {
      if (((*param_3 == '%') && (iVar2 = strncmp(param_3,"%ADOBeginFontDict",0x11), iVar2 == 0)) &&
         (*(int *)(param_1 + 0x1b0) != 0)) {
        *(int *)(param_2 + 0x17) = *(int *)(param_2 + 0x17) + 1;
      }
    }
    if (pcVar8 <= pcVar1) break;
    (*(code *)param_2[8])(param_2);
    if ((pcVar8 <= (char *)*param_2) || (*(int *)(param_2 + 3) != 0)) break;
    if (((*pcVar1 == '/') && (pcVar1 + 2 < pcVar8)) &&
       (iVar2 = (int)(char *)*param_2 - (int)pcVar1, uVar6 = iVar2 - 1, iVar2 - 2U < 0x15)) {
      puVar5 = &DAT_14043e310;
      uVar3 = 0xb;
      do {
        if ((uVar3 == uVar6) &&
           (iVar2 = memcmp(pcVar1 + 1,*(void **)(puVar5 + 8),(ulonglong)uVar6), iVar2 == 0)) {
          if (*(int *)(puVar5 + 0x14) == 0xb) {
            (**(code **)(puVar5 + 0x18))(param_1,param_2);
            uVar4 = (ulonglong)*(uint *)(param_2 + 3);
          }
          else {
            iVar2 = *(int *)(puVar5 + 0x10);
            local_res10[0] = param_1 + 0xe8;
            if (iVar2 != 1) {
              if (iVar2 == 3) {
                local_res10[0] = param_1 + 0x1c8;
              }
              else if (iVar2 == 4) {
                local_res10[0] = param_1 + 0x110;
              }
              else if (iVar2 == 6) {
                local_res10[0] = param_1 + 0x148;
              }
              else {
                if (*(uint *)(param_1 + 0x1b0) <= *(uint *)(param_2 + 0x17)) {
                  *(undefined4 *)(param_2 + 3) = 0xa0;
                  return 0xa0;
                }
                local_res10[0] =
                     *(longlong *)(param_1 + 0x1b8) + (ulonglong)*(uint *)(param_2 + 0x17) * 0xfc;
              }
            }
            if (*(int *)(puVar5 + 0x14) - 9U < 2) {
              uVar4 = (*(code *)param_2[0x11])(param_2,puVar5,local_res10,0,0);
            }
            else {
              uVar4 = (*(code *)param_2[0x10])();
            }
          }
          *(int *)(param_2 + 3) = (int)uVar4;
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          goto LAB_1403237c8;
        }
        uVar3 = *(uint *)(puVar5 + 0x38);
        puVar5 = puVar5 + 0x38;
      } while (uVar3 != 0);
      param_3 = (char *)*param_2;
    }
    else {
LAB_1403237c8:
      param_3 = (char *)*param_2;
    }
  }
  uVar4 = 3;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_2 + 3);
  }
  return uVar4;
}

