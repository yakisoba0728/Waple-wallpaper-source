// Function: FUN_1404b63e4
// Addr: 1404b63e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b63e4(longlong param_1,int *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar6;
  undefined8 in_RAX;
  uint *puVar4;
  char cVar7;
  char *pcVar5;
  char cVar8;
  undefined1 *unaff_RDI;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX));
  uVar3 = (uint)puVar4 | *puVar4;
  bVar2 = (byte)uVar3;
  bVar6 = (char)(uVar3 >> 8) + (char)param_2;
  cVar7 = bVar6 + bVar2;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar7,bVar2));
  pcVar5 = (char *)(ulonglong)
                   CONCAT31((int3)(uVar3 >> 8),
                            bVar2 + *(char *)(ulonglong)uVar3 + CARRY1(bVar6,bVar2));
  *(char *)(param_1 + (longlong)param_2) = *(char *)(param_1 + (longlong)param_2) + cVar8;
  pcVar5[(longlong)param_2] = pcVar5[(longlong)param_2] + cVar8;
  *pcVar5 = *pcVar5 + cVar7;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  uVar1 = in((short)param_2);
  unaff_RDI[1] = uVar1;
  *param_2 = *param_2 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

