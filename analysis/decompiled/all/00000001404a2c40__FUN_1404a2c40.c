// Function: FUN_1404a2c40
// Addr: 1404a2c40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2c40(int *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  bool in_OF;
  
  cVar6 = (char)param_1;
  if (!in_OF) {
    pcVar1 = (char *)(unaff_RBX + 0x4a + unaff_RBP);
    *pcVar1 = *pcVar1 + cVar6;
    *(char *)param_1 = (char)*param_1 + (char)(in_EAX + 0x56b9100);
    *(char *)param_2 = (char)*param_2 + cVar6;
    *param_1 = *param_1 + (int)param_2;
    *(char *)param_1 = (char)*param_1 + (char)((uint)(in_EAX + 0x56b9100) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = in_EAX + 0x34050002;
  iVar2 = CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 | *(byte *)(ulonglong)uVar4);
  out(*unaff_RSI,(short)param_2);
  uVar4 = iVar2 + 0x56f6500;
  puVar5 = (uint *)(ulonglong)uVar4;
  *(char *)puVar5 = (char)*puVar5 + (char)(uVar4 >> 8);
  iVar3 = *param_2;
  *puVar5 = *puVar5 & uVar4;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar4;
  out(unaff_RSI[1],(short)param_2);
  uVar4 = iVar2 + 0xadeca00;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)(uVar4 >> 8);
  *param_2 = *param_2 +
             CONCAT31((int3)((ulonglong)param_1 >> 8),cVar6 + (char)iVar3 + (char)*param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

