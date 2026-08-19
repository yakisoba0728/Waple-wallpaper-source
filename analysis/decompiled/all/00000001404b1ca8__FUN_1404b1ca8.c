// Function: FUN_1404b1ca8
// Addr: 1404b1ca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1ca8(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *in_RAX;
  longlong unaff_RDI;
  uint *puVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2,(char)in_RAX)) +
          0xc540000;
  puVar3 = (uint *)(ulonglong)uVar2;
  pcVar1 = (char *)((longlong)puVar3 + param_1 * 2 + 0x16);
  *pcVar1 = *pcVar1 + (char)(uVar2 >> 8);
  *(char *)(unaff_RDI + -0x6fffe9b8) =
       *(char *)(unaff_RDI + -0x6fffe9b8) + (char)((ulonglong)param_2 >> 8);
  *puVar3 = *puVar3 & uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

