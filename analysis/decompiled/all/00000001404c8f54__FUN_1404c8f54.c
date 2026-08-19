// Function: FUN_1404c8f54
// Addr: 1404c8f54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8f54(undefined8 param_1,char param_2)

{
  char *pcVar1;
  byte in_AL;
  byte in_AH;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  
  bVar2 = in_AH | in_AL;
  pcVar1 = (char *)(in_FS_OFFSET +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) + 0x7f);
  *pcVar1 = *pcVar1 + param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL));
  *(undefined1 *)(unaff_RDI + 0x31) = *(undefined1 *)(unaff_RDI + 0x31);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) + 0x7f);
  *pcVar1 = *pcVar1 + param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL));
  *(undefined1 *)(unaff_RDI + 0x31) = *(undefined1 *)(unaff_RDI + 0x31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

