// Function: FUN_1404c892c
// Addr: 1404c892c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c892c(char *param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  ulonglong uVar2;
  undefined7 uVar5;
  uint *puVar4;
  ulonglong unaff_RBX;
  char unaff_R12B;
  char *pcVar3;
  
  uVar2 = unaff_RBX & 0xffffffff;
  uVar5 = (undefined7)(uVar2 >> 8);
  cVar1 = (char)uVar2 + -0x31;
  pcVar3 = (char *)CONCAT71(uVar5,cVar1);
  param_2[0x4000312c] = param_2[0x4000312c] + (char)in_EAX;
  *(char *)((longlong)pcVar3 * 2 + 0x21) = (char)param_1;
  *pcVar3 = *pcVar3 + cVar1;
  *(char *)((ulonglong)in_EAX - 0x65ffced4) =
       *(char *)((ulonglong)in_EAX - 0x65ffced4) + (char)param_2;
  cVar1 = (char)uVar2 + -0x62;
  puVar4 = (uint *)CONCAT71(uVar5,cVar1);
  *(char *)(puVar4 + -0x1e) = (char)puVar4[-0x1e] + cVar1;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)puVar4 = (char)*puVar4 + cVar1;
  *(char *)(puVar4 + 0xb) = (char)puVar4[0xb] + (char)(uVar2 >> 8);
  *puVar4 = *puVar4 ^ (uint)puVar4;
  cVar1 = (char)in_EAX + -0x31;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(in_EAX >> 8),cVar1);
  pcVar3[(longlong)param_1 * 4] = pcVar3[(longlong)param_1 * 4] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

