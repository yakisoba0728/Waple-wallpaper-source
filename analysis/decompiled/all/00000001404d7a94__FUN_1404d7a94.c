// Function: FUN_1404d7a94
// Addr: 1404d7a94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7a94(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AH;
  undefined1 uVar2;
  undefined6 uVar3;
  char unaff_SPL;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar2 = (undefined1)param_1;
  pcVar1 = (char *)(param_2 + -0x5fffc84a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  if (*pcVar1 < '\0') {
    *(char *)CONCAT62(uVar3,CONCAT11(0x37,uVar2)) =
         *(char *)CONCAT62(uVar3,CONCAT11(0x37,uVar2)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar3,CONCAT11(0x37,uVar2)) =
       *(char *)CONCAT62(uVar3,CONCAT11(0x37,uVar2)) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

