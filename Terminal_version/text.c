FILE *pass;
        pass = fopen("donarDet.txt", "a");
        fprintf(pass, "%s,\t%d,\t%s,\t%s,\t%s,\t%s,\t%s,\t%s,\t%s,\t%s,\t%d\n", det.name, det.age, det.sex, det.bloodGroup, det.phNo, det.door, det.street, det.area, det.district, det.pin, det.lastDonation);
        fclose(pass);
        break;