// Function: FUN_1404b1c7c
// Addr: 1404b1c7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1c7c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong in_RAX;
  char unaff_SPL;
  longlong unaff_RDI;
  uint *puVar3;
  
  *param_1 = *param_1 + unaff_SPL;
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *(byte *)(in_RAX * 2)) +
          0xc540500;
  puVar3 = (uint *)(ulonglong)uVar2;
  pcVar1 = (char *)((longlong)puVar3 + (longlong)param_1 * 2 + 0x16);
  *pcVar1 = *pcVar1 + (char)(uVar2 >> 8);
  *(char *)(unaff_RDI + -0x6fffe9b8) =
       *(char *)(unaff_RDI + -0x6fffe9b8) + (char)((ulonglong)param_2 >> 8);
  *puVar3 = *puVar3 & uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

