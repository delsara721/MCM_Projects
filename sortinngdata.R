#draft1.df<-data.frame(draft1)
#draft1.df
#x.sub8 <- draft1.df[c(1, 3), 2:4]
#x.sub8
#x.sub8$one

draft1sorting<-draft1sorting[order(draft1sorting$one),]
draft1<-draft1[order(draft1$two),]
draft1<-draft1[order(draft1$three),]
draft1<-draft1[order(draft1$four),]

#takes the first column and sorts it lowest to highest 
newdraft1<-subset(draft1sorting<-draft1sorting[order(-draft1sorting$one),])
newdraft1
newdraft1.df<-data.frame(newdraft1)
x.sub8 <-newdraft1.df[c(1,2,3,4),1:2 ] #cuts out the last row - lowest number
x.sub8
x.sub8$name 
draft1$name
draft1sorting$name
