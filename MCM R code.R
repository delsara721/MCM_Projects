setwd("C:/Users/Delsey/OneDrive/MCM/data sorted")

#1 UGDS
C.edited.data<-C.edited.data[order(-C.edited.data$UGDS),]
write.csv(C.edited.data$UGDS, file = "UGDS.csv", row.names = FALSE)

#2 MINORITY
C.edited.data$minority<-(C.edited.data$UGDS_BLACK+C.edited.data$UGDS_HISP+C.edited.data$UGDS_ASIAN+C.edited.data$UGDS_AIAN+C.edited.data$UGDS_NHPI)
C.edited.data<-C.edited.data[order(-C.edited.data$minority),]
write.csv(C.edited.data$minority, file = "minority.csv", row.names = FALSE)

#3 UGDS_WHITE - this not included in the point system actually 
C.edited.data<-C.edited.data[order(-C.edited.data$UGDS_WHITE),]
write.csv(C.edited.data$UGDS_WHITE, file = "dUGDS_WHITE.csv", row.names = FALSE)
cd
#4 PCTPELL 
C.edited.data<-C.edited.data[order(-C.edited.data$PCTPELL),]
write.csv(C.edited.data$PCTPELL, file = "PCTPELL.csv", row.names = FALSE)

#5 GRAD_DEBT_MDN_SUPP
C.edited.data<-C.edited.data[order(-C.edited.data$GRAD_DEBT_MDN_SUPP),]
write.csv(C.edited.data$GRAD_DEBT_MDN_SUPP, file = "GRAD_DEBT_MDN_SUPP.csv", row.names = FALSE)

#6 C150_4_POOLED_SUPP
C.edited.data<-C.edited.data[order(-C.edited.data$C150_4_POOLED_SUPP),]
write.csv(C.edited.data$C150_4_POOLED_SUPP, file = "C150_4_POOLED_SUPP.csv", row.names = FALSE)

#7 C200_L4_POOLED_SUPP
C.edited.data<-C.edited.data[order(-C.edited.data$C200_L4_POOLED_SUPP),]
write.csv(C.edited.data$C200_L4_POOLED_SUPP, file = "C200_L4_POOLED_SUPP.csv", row.names = FALSE)

#8 md_earn_wne_p10
C.edited.data<-C.edited.data[order(-C.edited.data$md_earn_wne_p10),]
write.csv(C.edited.data$md_earn_wne_p10, file = "md_earn_wne_p10.csv", row.names = FALSE)

# This is the list of names/ rows sorted in order
setwd("C:/Users/Delsey/OneDrive/MCM/sorted")
#1 UGDS
C.edited.data<-C.edited.data[order(-C.edited.data$UGDS),]
write.csv(C.edited.data$Name, file = "UGDS.csv", row.names = FALSE)

#2 MINORITY
C.edited.data$minority<-(C.edited.data$UGDS_BLACK+C.edited.data$UGDS_HISP+C.edited.data$UGDS_ASIAN+C.edited.data$UGDS_AIAN+C.edited.data$UGDS_NHPI)
C.edited.data<-C.edited.data[order(-C.edited.data$minority),]
write.csv(C.edited.data$Name, file = "minority.csv", row.names = FALSE)

#3 UGDS_WHITE - this not included in the point system actually 
C.edited.data<-C.edited.data[order(-C.edited.data$UGDS_WHITE),]
write.csv(C.edited.data$Name, file = "UGDS_WHITE.csv", row.names = FALSE)

#4 PCTPELL 
C.edited.data<-C.edited.data[order(-C.edited.data$PCTPELL),]
write.csv(C.edited.data$Name, file = "PCTPELL.csv", row.names = FALSE)

#5 GRAD_DEBT_MDN_SUPP
C.edited.data<-C.edited.data[order(-C.edited.data$GRAD_DEBT_MDN_SUPP),]
write.csv(C.edited.data$Name, file = "GRAD_DEBT_MDN_SUPP.csv", row.names = FALSE)

#6 C150_4_POOLED_SUPP
C.edited.data<-C.edited.data[order(-C.edited.data$C150_4_POOLED_SUPP),]
write.csv(C.edited.data$Name, file = "C150_4_POOLED_SUPP.csv", row.names = FALSE)

#7 C200_L4_POOLED_SUPP
C.edited.data<-C.edited.data[order(-C.edited.data$C200_L4_POOLED_SUPP),]
write.csv(C.edited.data$Name, file = "C200_L4_POOLED_SUPP.csv", row.names = FALSE)

#8 md_earn_wne_p10
C.edited.data<-C.edited.data[order(-C.edited.data$md_earn_wne_p10),]
write.csv(C.edited.data$Name, file = "md_earn_wne_p10.csv", row.names = FALSE)

pointsforSorting<-pointsforSorting[order(-pointsforSorting$Points),]
write.csv(pointsforSorting, file = "pointSortedNumbers.csv", row.names = FALSE)
pointsforSorting
