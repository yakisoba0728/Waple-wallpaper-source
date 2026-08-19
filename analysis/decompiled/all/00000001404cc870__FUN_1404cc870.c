// Function: FUN_1404cc870
// Addr: 1404cc870
// Size: 1 bytes


char * FUN_1404cc870(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *in_RAX;
  char cVar5;
  char *unaff_RDI;
  char unaff_R12B;
  char in_SF;
  char in_OF;
  char *pcVar4;
  
  cVar5 = (char)param_2;
  if (in_OF == in_SF) {
    *param_1 = *param_1 + unaff_R12B;
    *in_RAX = *in_RAX + (char)in_RAX;
    *in_RAX = *in_RAX + cVar5;
    sysexit();
    return in_RAX;
  }
  uVar2 = (int)in_RAX + 0x74050002;
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  uVar3 = uVar2 ^ 0x350f8200;
  pcVar4 = (char *)(ulonglong)uVar3;
  unaff_RDI[(longlong)pcVar4 * 8 + 0x4c] = unaff_RDI[(longlong)pcVar4 * 8 + 0x4c] + cVar5;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  cVar1 = (char)uVar2;
  *param_2 = *param_2 + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + cVar5;
    sysexit();
    return pcVar4;
  }
  *param_1 = *param_1 + unaff_R12B;
  uVar3 = uVar3 + 0x64050002;
  return (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3);
}

