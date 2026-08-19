// Function: FUN_1404c5fc4
// Addr: 1404c5fc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5fc4(char *param_1,longlong param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar1;
  longlong unaff_RBX;
  char unaff_R12B;
  char acStackX_8 [32];
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + in_AH;
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar1;
  *param_1 = *param_1 + unaff_R12B;
  acStackX_8[param_2 * 2] = acStackX_8[param_2 * 2] + (char)param_1;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 8) =
       *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 8) | in_AL | 8;
  *(char *)((longlong)param_1 * 2) =
       *(char *)((longlong)param_1 * 2) + (in_AH + (char)((ulonglong)param_2 >> 8)) * '\x02';
  *(char *)(unaff_RBX + -0x4fffd103) = *(char *)(unaff_RBX + -0x4fffd103) + cVar1;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

