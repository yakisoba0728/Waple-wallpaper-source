// Function: FUN_1404b12a0
// Addr: 1404b12a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b12a0(char param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 in_RAX;
  char cVar3;
  undefined6 uVar4;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RDI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)param_2;
  bVar1 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) = *(char *)CONCAT71(unaff_00000021,unaff_SPL) + cVar2;
  *unaff_RDI = *unaff_RDI +
               (char)((uint)((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                           (char)in_RAX + '\x04' + CARRY1(bVar1,unaff_SPL)) +
                            -0x31fff23c) >> 8);
  *param_4 = *param_4 + unaff_SPL;
  cRam0000000011b80015 = cRam0000000011b80015 + '\x15';
  cVar3 = (char)((ulonglong)param_2 >> 8) + param_1;
  *unaff_RDI = *unaff_RDI;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + param_1;
  cRam0000000011b80015 = cRam0000000011b80015 + '\x15';
  cVar2 = in(4);
  *(char *)CONCAT71(0x11b800,cVar2) = *(char *)CONCAT71(0x11b800,cVar2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

