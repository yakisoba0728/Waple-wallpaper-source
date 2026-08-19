// Function: FUN_1404d77a8
// Addr: 1404d77a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d77a8(longlong param_1,char *param_2)

{
  int *piVar1;
  byte bVar2;
  char in_AL;
  undefined1 uVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar4;
  char unaff_BL;
  longlong in_FS_OFFSET;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 ||
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + in_AH;
  uVar3 = in(0x10);
  bVar2 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar3)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar3)))
       + (byte)pcVar4;
  piVar1 = (int *)(in_FS_OFFSET +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar3))
                          ));
  *piVar1 = *piVar1 + CONCAT22(in_register_00000002,CONCAT11(in_AH,uVar3)) +
            (uint)CARRY1(bVar2,(byte)pcVar4);
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

