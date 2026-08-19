// Function: FUN_1404bf674
// Addr: 1404bf674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf674(ulonglong param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 in_RAX;
  byte in_CF;
  undefined8 unaff_retaddr;
  char acStackX_8 [32];
  char *pcVar4;
  
  bVar1 = (byte)in_RAX - 0xc;
  cVar3 = bVar1 + in_CF;
  *(undefined8 *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3) = unaff_retaddr;
  acStackX_8
  [CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
            CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2 +
                     (0xb < (byte)in_RAX || CARRY1(bVar1,in_CF)),cVar3)) * 8] =
       acStackX_8
       [CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                 CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2 +
                          (0xb < (byte)in_RAX || CARRY1(bVar1,in_CF)),cVar3)) * 8] + (char)param_1;
  pcVar4 = (char *)(param_1 & 0xffffffff);
  *pcVar4 = *pcVar4 + cVar3;
  if (*pcVar4 == '\0') {
    uVar2 = in(0x2e);
    pcVar4 = (char *)(ulonglong)CONCAT31((int3)(param_1 >> 8),uVar2);
    *pcVar4 = *pcVar4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

