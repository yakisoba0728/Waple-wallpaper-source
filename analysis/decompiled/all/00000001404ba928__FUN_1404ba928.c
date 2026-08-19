// Function: FUN_1404ba928
// Addr: 1404ba928
// Size: 1 bytes


void FUN_1404ba928(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  byte in_AH;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint unaff_ESP;
  longlong unaff_RBP;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & unaff_ESP;
  bVar2 = in_AH & (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)((ulonglong)CONCAT43(in_register_00000004,CONCAT21(in_register_00000002,bVar2)) *
                    0x100 + unaff_RBP);
  *pbVar1 = *pbVar1 | (byte)param_2;
  out(0xf4,(uint)CONCAT21(in_register_00000002,bVar2) << 8);
  *(undefined1 *)
   ((ulonglong)CONCAT43(in_register_00000004,CONCAT21(in_register_00000002,bVar2)) << 8) = 0;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

