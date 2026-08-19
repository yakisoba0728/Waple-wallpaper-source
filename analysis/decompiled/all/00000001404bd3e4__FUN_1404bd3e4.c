// Function: FUN_1404bd3e4
// Addr: 1404bd3e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd3e4(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong in_RAX;
  char *pcVar3;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  undefined4 *unaff_RDI;
  undefined8 uStack_10;
  
  *unaff_RDI = (int)in_RAX;
  uRam000000018c1e97eb = uRam000000018c1e97eb & (uint)&stack0x00000000;
  *param_1 = *param_1 + (char)in_RAX;
  pcVar3 = (char *)((in_RAX | 0xe84e00) + 1 +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *pcVar3 = *pcVar3 + (char)in_RAX;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BH;
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  pcVar3 = (char *)CONCAT71(0x340f00,CARRY1(bVar1,unaff_BH) + '\x03');
  GlobalDescriptorTableRegister(*param_2);
  *pcVar3 = *pcVar3 + (char)param_1;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

