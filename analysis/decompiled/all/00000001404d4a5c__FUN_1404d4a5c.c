// Function: FUN_1404d4a5c
// Addr: 1404d4a5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4a5c(char *param_1,longlong param_2,char param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar2;
  bool in_OF;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  if (!in_OF) {
    *(char *)((longlong)param_1 * 3) = *(char *)((longlong)param_1 * 3) + cVar2;
    *param_4 = *param_4 + param_3;
    pcVar1 = (char *)(param_2 +
                     (CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 5) * 2);
    *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x7c);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

