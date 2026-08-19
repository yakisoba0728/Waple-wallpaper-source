// Function: FUN_1404a6c38
// Addr: 1404a6c38
// Size: 1 bytes


void FUN_1404a6c38(char *param_1,int *param_2)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char in_CF;
  char *pcVar4;
  
  *(char *)(unaff_RBX + 0x4a) =
       (*(char *)(unaff_RBX + 0x4a) - (char)((ulonglong)param_1 >> 8)) - in_CF;
  *param_1 = *param_1 + (char)in_EAX;
  uVar2 = in_EAX + 0x34050002;
  *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2;
  *param_2 = *param_2 + (int)param_1;
  uVar3 = in_EAX + 0xc90a0138;
  cVar1 = (char)uVar3 + *(char *)(ulonglong)uVar3;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar1);
  *(char *)(unaff_RBP + 0x9ca) =
       *(char *)(unaff_RBP + 0x9ca) +
       ((byte)((ulonglong)param_2 >> 8) | *(byte *)((longlong)param_2 + (ulonglong)uVar2));
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *pcVar4 = *pcVar4 + cVar1;
  pcVar4[-0x4afff636] = pcVar4[-0x4afff636] + cVar1;
  return;
}

