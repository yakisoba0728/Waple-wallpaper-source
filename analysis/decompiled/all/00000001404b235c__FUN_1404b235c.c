// Function: FUN_1404b235c
// Addr: 1404b235c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b235c(longlong param_1,char param_2)

{
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar1;
  
  uRam00000001a4502364 = uRam00000001a4502364 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_AL == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x1b);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

