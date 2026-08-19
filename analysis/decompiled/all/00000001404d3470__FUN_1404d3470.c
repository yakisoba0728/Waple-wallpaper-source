// Function: FUN_1404d3470
// Addr: 1404d3470
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3470(char *param_1,char param_2)

{
  uint uVar1;
  char cVar4;
  undefined8 in_RAX;
  uint *puVar2;
  longlong unaff_RBX;
  char *pcVar3;
  
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'h');
  uVar1 = (uint)puVar2 | *puVar2;
  pcVar3 = (char *)(ulonglong)uVar1;
  *(int *)(unaff_RBX + 0x3c) = *(int *)(unaff_RBX + 0x3c) + 0x49f8fc00;
  cVar4 = (char)(uVar1 >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar1;
  pcVar3[0x43] = pcVar3[0x43] + param_2;
  *(int *)(unaff_RBX + 0x3c) = *(int *)(unaff_RBX + 0x3c) + 0x49f8fc00;
  *param_1 = *param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

