// Function: FUN_1404aa5c0
// Addr: 1404aa5c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa5c0(byte *param_1)

{
  byte bVar1;
  undefined1 in_AL;
  char cVar2;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  
  bVar1 = *param_1;
  *param_1 = *param_1 + in_AH;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       (*(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - (int)param_1) -
       (uint)CARRY1(bVar1,in_AH);
  *param_1 = *param_1 + unaff_BL;
  cVar2 = in(4);
  cRam00000001904ab00d = cRam00000001904ab00d + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

