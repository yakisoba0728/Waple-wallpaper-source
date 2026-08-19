// Function: FUN_1404a7644
// Addr: 1404a7644
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7644(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined7 uVar3;
  char unaff_BL;
  char unaff_SPL;
  
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + 0x1b;
  pcVar1 = (char *)(CONCAT71(uVar3,bVar2 | *(byte *)CONCAT71(uVar3,bVar2)) + 0x75);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

