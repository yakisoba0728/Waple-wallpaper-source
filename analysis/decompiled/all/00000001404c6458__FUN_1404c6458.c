// Function: FUN_1404c6458
// Addr: 1404c6458
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6458(char param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  bVar3 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  if (!CARRY1(bVar2,bVar3)) {
    pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x38002f72);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000141ac7109 = cRam0000000141ac7109 + param_1;
  SegmentLimit(*(undefined4 *)CONCAT44(in_register_00000004,in_EAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

