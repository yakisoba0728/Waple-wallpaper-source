// Function: FUN_1404a24bc
// Addr: 1404a24bc
// Size: 1 bytes


void FUN_1404a24bc(char *param_1)

{
  undefined3 uVar1;
  char cVar2;
  int in_EAX;
  char unaff_BH;
  char *unaff_RDI;
  char *pcVar3;
  
  uVar1 = (undefined3)
          ((uint)(CONCAT31((int3)((uint)(in_EAX + 0x2421087e) >> 8),
                           (char)(in_EAX + 0x2421087e) + -0xc) + 0x3f000a54) >> 8);
  cVar2 = in(0x23);
  pcVar3 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *param_1 = *param_1 + -8;
  *pcVar3 = *pcVar3 + cVar2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  cVar2 = in(0x23);
  pcVar3 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *param_1 = *param_1 + -8;
  *pcVar3 = *pcVar3 + (char)param_1;
  *pcVar3 = *pcVar3 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

