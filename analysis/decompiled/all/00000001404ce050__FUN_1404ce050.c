// Function: FUN_1404ce050
// Addr: 1404ce050
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce050(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  uint *puVar4;
  char cVar6;
  longlong unaff_RBX;
  longlong unaff_RDI;
  char in_CF;
  char *pcVar5;
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 't' + in_CF);
  *puVar4 = *puVar4 | (uint)puVar4;
  iVar3 = (uint)puVar4 + 0xd0000834;
  cVar2 = (char)iVar3 + -0x74;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),cVar2);
  pcVar1 = (char *)(unaff_RDI + 0x4c + unaff_RBX * 8);
  *pcVar1 = *pcVar1 + cVar6;
  *param_1 = *param_1 + (char)((uint)iVar3 >> 8);
  *pcVar5 = *pcVar5 + cVar2;
  pcVar1 = (char *)(unaff_RDI + 0x4c + unaff_RBX * 8);
  *pcVar1 = *pcVar1 + cVar6;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

