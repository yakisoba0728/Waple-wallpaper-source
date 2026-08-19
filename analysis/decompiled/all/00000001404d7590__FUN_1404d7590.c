// Function: FUN_1404d7590
// Addr: 1404d7590
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7590(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  uint *unaff_RDI;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)unaff_RDI + (longlong)param_1) =
       *(char *)((longlong)unaff_RDI + (longlong)param_1) + cVar3;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pcVar2 = *pcVar2 + in_AH;
  param_1[param_2] = param_1[param_2] + (char)param_2;
  pbVar1 = (byte *)(param_2 + 0x38);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *(char *)(CONCAT71(unaff_00000019,unaff_BL + (char)((ulonglong)param_1 >> 8)) + 0x4d) = cVar3;
  *param_1 = *param_1 + in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pbVar1 = *pbVar1 | in_AL;
  *(ulonglong *)
   ((ulonglong)
    (uint)((int)&stack0x00000000 +
          *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL + 0x70)) + 2)) - 8) =
       CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL + 0x70));
  *unaff_RDI = *unaff_RDI & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

