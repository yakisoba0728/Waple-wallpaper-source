// Function: FUN_1404a7364
// Addr: 1404a7364
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7432) */

void FUN_1404a7364(char *param_1,char *param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar2;
  undefined1 uVar3;
  undefined6 uVar4;
  char cVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar3 = (undefined1)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(unaff_RBP + 0x2c0009fd);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar5;
  if (!SCARRY1(cVar2,cVar5)) {
    cVar2 = (char)param_1 + *param_2;
    pcVar1 = (char *)(unaff_RBX +
                     CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
    *pcVar1 = *pcVar1 + in_AL;
    *(byte *)CONCAT62(uVar4,CONCAT11(uVar3,cVar2)) =
         *(char *)CONCAT62(uVar4,CONCAT11(uVar3,cVar2)) +
         (in_AL | *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

