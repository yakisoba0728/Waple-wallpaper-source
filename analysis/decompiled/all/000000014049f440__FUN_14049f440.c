// Function: FUN_14049f440
// Addr: 14049f440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f458) overlaps instruction at (ram,0x00014049f457)
    */
/* WARNING: Removing unreachable block (ram,0x00014049f45b) */

void FUN_14049f440(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  byte in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_SF;
  
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  if (in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RBX + 0x49 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + in_AL;
  *param_1 = *param_1 + in_AH;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + in_AL;
  bVar2 = in_AH * '\x02';
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)) + (uint)CARRY1(in_AH,in_AH);
  cVar3 = bVar2 + (byte)param_2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))
       - in_AL) - CARRY1(bVar2,(byte)param_2);
  if (-1 < *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))) {
    *(char *)(unaff_RBX + 0x44000178) =
         *(char *)(unaff_RBX + 0x44000178) + (char)((ulonglong)param_1 >> 8);
    *param_4 = *param_4 + '\b';
    *param_2 = *param_2 + in_AL;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))
                          ) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[1] = CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

