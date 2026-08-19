// Function: FUN_1404b288c
// Addr: 1404b288c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b288c(undefined8 param_1,undefined8 param_2)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  byte bVar5;
  uint *in_RAX;
  char *pcVar4;
  byte bVar6;
  char *unaff_RDI;
  
  bVar6 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  uVar3 = ((int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11(bVar5 * '\x02' + bVar6,
                                  ((byte)in_RAX | (byte)*in_RAX) - CARRY1(bVar5,bVar5))) +
          -0x1ec40000) - (uint)CARRY1(bVar5 * '\x02',bVar6);
  pcVar4 = (char *)(ulonglong)uVar3;
  cVar2 = (char)uVar3;
  *pcVar4 = *pcVar4 + cVar2;
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + cVar2;
    pcVar4 = (char *)((ulonglong)uVar3 ^ 0x25);
    *pcVar4 = *pcVar4 + (char)((ulonglong)param_2 >> 8);
    *unaff_RDI = *unaff_RDI - bVar6;
    unaff_RDI[0x78001728] = unaff_RDI[0x78001728] + (char)pcVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (undefined3)(uVar3 >> 8);
  pcVar4 = (char *)(ulonglong)
                   CONCAT31(uVar1,cVar2 + 0x34U | *(byte *)(ulonglong)CONCAT31(uVar1,cVar2 + 0x34U))
  ;
  *pcVar4 = *pcVar4 << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

