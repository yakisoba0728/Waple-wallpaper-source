// Function: FUN_1404bc538
// Addr: 1404bc538
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc538(longlong param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  byte in_AL;
  byte bVar3;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  
  *(byte *)(param_1 + -0x469fffde) = *(byte *)(param_1 + -0x469fffde) ^ unaff_BH;
  bVar3 = in_AL & *(byte *)CONCAT71(in_register_00000001,in_AL);
  piVar2 = (int *)(CONCAT71(in_register_00000001,bVar3) + 0x11d81400);
  *piVar2 = *piVar2 + param_2;
  pcVar1 = (char *)(param_1 + CONCAT71(in_register_00000001,bVar3));
  *pcVar1 = *pcVar1 + (char)param_1;
  cRam00000001614bc635 = cRam00000001614bc635 + bVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

