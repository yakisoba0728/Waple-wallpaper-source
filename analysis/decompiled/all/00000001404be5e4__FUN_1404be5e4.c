// Function: FUN_1404be5e4
// Addr: 1404be5e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be5e4(char param_1,uint param_2)

{
  int in_EAX;
  char *pcVar1;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  pcVar1 = (char *)(ulonglong)(in_EAX + 0x39341600U);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)param_2;
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_ESI;
  *pcVar1 = *pcVar1 + param_1;
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x39341600U);
  uRam00000000d860e606 = uRam00000000d860e606 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

