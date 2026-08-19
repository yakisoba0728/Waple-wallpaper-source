// Function: FUN_1404bfcf8
// Addr: 1404bfcf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfcf8(char param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar7;
  char *in_RAX;
  byte bVar8;
  uint unaff_EBX;
  longlong in_FS_OFFSET;
  uint *puVar6;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX - (char)in_RAX;
  uVar5 = (uint)in_RAX & unaff_EBX;
  puVar6 = (uint *)(ulonglong)uVar5;
  uVar2 = *puVar6;
  *puVar6 = *puVar6 - uVar5;
  bVar7 = (byte)(uVar5 >> 8);
  bVar4 = bVar7 - bVar8;
  uVar3 = *(undefined4 *)
           (ulonglong)CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar4 - (uVar2 < uVar5),(char)uVar5))
  ;
  pcVar1 = (char *)(in_FS_OFFSET +
                   (ulonglong)
                   CONCAT22((short)((uint)uVar3 >> 0x10),
                            CONCAT11((char)((uint)uVar3 >> 8) * '\x02' +
                                     (bVar7 < bVar8 || bVar4 < (uVar2 < uVar5)),(char)uVar3)));
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

